//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSModelsCommonMessageFlightLog.h"

@class JavaUtilOptional, NSString;

@interface DYNSModelsCommonAutoValue_MessageFlightLog : DYNSModelsCommonMessageFlightLog
{
    NSString *eventType_;
    long long loggedTimeMs_;
    long long sourceTimeMs_;
    JavaUtilOptional *details_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)getDetails;
- (long long)getSourceTimeMs;
- (long long)getLoggedTimeMs;
- (id)getEventType;

@end
