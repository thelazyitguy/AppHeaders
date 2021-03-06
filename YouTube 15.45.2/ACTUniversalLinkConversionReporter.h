//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACTConversionReporterPrivate.h"

#import "ACTPingerDelegate-Protocol.h"
#import "ACTReportingInfoDelegate-Protocol.h"

@class NSString;

@interface ACTUniversalLinkConversionReporter : ACTConversionReporterPrivate <ACTReportingInfoDelegate, ACTPingerDelegate>
{
    NSString *_clickID;
}

- (void).cxx_destruct;
- (id)filteredCommonQueryParameters:(id)arg1;
- (id)reportingURLPrefix;
- (id)queryParameters;
- (id)deduplicationID;
- (void)dealloc;
- (id)initWithValue:(id)arg1 currencyCode:(id)arg2 referrerKeySuffix:(id)arg3 isRepeatable:(_Bool)arg4;
- (id)initWithUserActivity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

