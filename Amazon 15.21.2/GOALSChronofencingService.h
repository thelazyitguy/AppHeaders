//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GOALSDebugLogger, GOALSRegionMonitoringClient;

@interface GOALSChronofencingService : NSObject
{
    GOALSRegionMonitoringClient *_goalsRegionMonitoringClient;
    GOALSDebugLogger *_debugLogger;
}

@property(retain, nonatomic) GOALSDebugLogger *debugLogger; // @synthesize debugLogger=_debugLogger;
@property(retain, nonatomic) GOALSRegionMonitoringClient *goalsRegionMonitoringClient; // @synthesize goalsRegionMonitoringClient=_goalsRegionMonitoringClient;
- (void).cxx_destruct;
- (void)cancelTracking:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)startTracking:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)initWithDependencies:(id)arg1;

@end
