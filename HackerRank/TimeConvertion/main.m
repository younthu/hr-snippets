//
//  main.m
//  TimeConvertion
//
//  Created by Zhiyong Yang on 8/17/16.
//  Copyright © 2016 Andrew Yang. All rights reserved.
//

#import <Foundation/Foundation.h>

// Failed
int main(int argc, const char * argv[]) {
    NSString* time;
    char* time_temp = (char *)malloc(10240 * sizeof(char));
    scanf("%s",time_temp);
    time = [NSString stringWithFormat:@"%s", time_temp];
    NSArray *components = [time componentsSeparatedByString:@":"];
    if([components[2] containsString:@"PM"]){
        
        
        NSString *s = [NSString stringWithFormat:@"%02d:%@:%@", [components[0] intValue] + 12, components[1], [components[2] stringByReplacingOccurrencesOfString:@"PM" withString:@""]];
        printf("%s\n", [s UTF8String]);
        
    }else{
        if([components[0] intValue] + 12 == 24){
            
            NSString *s = [NSString stringWithFormat:@"%02d:%@:%@", 0, components[1], [components[2] stringByReplacingOccurrencesOfString:@"AM" withString:@""]];
            printf("%s\n", [s UTF8String]);
        }else {
            NSString *s = [NSString stringWithFormat:@"%@",  [time stringByReplacingOccurrencesOfString:@"AM" withString:@""]];
            printf("%s\n", [s UTF8String]);
        }
    }
    return 0;
}
