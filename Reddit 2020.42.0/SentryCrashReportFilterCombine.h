//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sentry/SentryCrashReportFilter-Protocol.h>

@class NSArray, NSString;

@interface SentryCrashReportFilterCombine : NSObject <SentryCrashReportFilter>
{
    NSArray *_filters;
    NSArray *_keys;
}

+ (id)filterWithFiltersAndKeys:(id)arg1;
+ (CDUnknownBlockType)argBlockWithFilters:(id)arg1 andKeys:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (void)filterReports:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (id)initWithFiltersAndKeys:(id)arg1;
- (id)initWithFilters:(id)arg1 keys:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

