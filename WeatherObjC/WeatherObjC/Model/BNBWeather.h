//
//  BNBWeather.h
//  WeatherObjC
//
//  Created by Brandi Bailey on 1/21/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BNBWeather : NSObject

@property NSString *city;
@property NSNumber *temperature;
@property UIImage *icon;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

- (instancetype)initWithCity:(NSString *)city
                 temperature:(NSNumber *)temperature
                        icon:(UIImage *)icon;


@end

