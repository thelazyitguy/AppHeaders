//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BusyHoursIntent;

@protocol BusyHoursIntentHandling <NSObject>
- (void)handleBusyHours:(BusyHoursIntent *)arg1 completion:(void (^)(BusyHoursIntentResponse *))arg2;

@optional
- (void)confirmBusyHours:(BusyHoursIntent *)arg1 completion:(void (^)(BusyHoursIntentResponse *))arg2;
@end

