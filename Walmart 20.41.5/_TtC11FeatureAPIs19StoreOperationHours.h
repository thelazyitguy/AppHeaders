//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface _TtC11FeatureAPIs19StoreOperationHours : NSObject
{
    // Error parsing type: , name: day
    // Error parsing type: , name: time
    // Error parsing type: , name: startTime
    // Error parsing type: , name: endTime
}

+ (id)formatOpenHour:(id)arg1:(id)arg2;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSDictionary *payload;
@property(nonatomic, copy) NSString *endTime;
@property(nonatomic, copy) NSString *startTime;
@property(nonatomic, copy) NSString *time;
@property(nonatomic, copy) NSString *day;

@end
