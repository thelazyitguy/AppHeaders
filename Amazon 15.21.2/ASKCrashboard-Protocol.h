//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSException, NSString;

@protocol ASKCrashboard <NSObject>
- (void)recordReactError:(NSString *)arg1 crashSpecificMetadata:(NSDictionary *)arg2;
- (void)recordError:(NSError *)arg1 crashSpecificMetadata:(NSDictionary *)arg2;
- (void)recordException:(NSException *)arg1 crashSpecificMetadata:(NSDictionary *)arg2;
- (void)uploadLastCrashReportWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)uploadLastCrashReport;
@end
