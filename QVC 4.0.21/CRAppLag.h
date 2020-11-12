//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CRReportableEvent.h"

#import "CRGarbageCollection-Protocol.h"

@class CRSession, NSArray, NSNumber, NSString;

@interface CRAppLag : CRReportableEvent <CRGarbageCollection>
{
}

+ (id)createRequestsForEvents:(id)arg1 appLocator:(id)arg2;
+ (double)defaultReportFrequency;
+ (_Bool)isEnabledByDefault;
+ (id)garbageCollectionSortDescriptor;
+ (unsigned long long)garbageCollectionLowWaterMark;
+ (unsigned long long)garbageCollectionHighWaterMark;
+ (id)fetchRequest;
- (id)eventCollectorJson;
- (id)rateValueWithSettings:(id)arg1;
- (id)sendEventValueWithSettings:(id)arg1;
- (id)initWithCurrentSession:(id)arg1 withName:(id)arg2 warnThreshold:(double)arg3 hangThreshold:(double)arg4;

// Remaining properties
@property(copy, nonatomic) NSNumber *appTerminated; // @dynamic appTerminated;
@property(retain, nonatomic) NSArray *breadcrumbs; // @dynamic breadcrumbs;
@property(copy, nonatomic) NSNumber *hangThreshold; // @dynamic hangThreshold;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *reason; // @dynamic reason;
@property(copy, nonatomic) NSNumber *responseTime; // @dynamic responseTime;
@property(retain, nonatomic) CRSession *session; // @dynamic session;
@property(copy, nonatomic) NSNumber *warnThreshold; // @dynamic warnThreshold;

@end
