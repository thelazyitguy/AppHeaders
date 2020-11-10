//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithResponseModelBuilder.h>

@class NSNumber, NSString;

@interface TFSTwitterAPIDirectMessageInboxTimelineCommand : TFSTwitterAPICommandWithResponseModelBuilder
{
    _Bool _filterNSFW;
    _Bool _filterMuted;
    unsigned long long _type;
    NSNumber *_maxID;
    NSNumber *_filterLowQuality;
    NSString *_includeQualityParameter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool filterMuted; // @synthesize filterMuted=_filterMuted;
@property(readonly, nonatomic) _Bool filterNSFW; // @synthesize filterNSFW=_filterNSFW;
@property(readonly, copy, nonatomic) NSString *includeQualityParameter; // @synthesize includeQualityParameter=_includeQualityParameter;
@property(readonly, nonatomic) NSNumber *filterLowQuality; // @synthesize filterLowQuality=_filterLowQuality;
@property(readonly, nonatomic) NSNumber *maxID; // @synthesize maxID=_maxID;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)request;
- (id)initWithAccountID:(id)arg1 type:(unsigned long long)arg2 maxID:(id)arg3 filterLowQuality:(id)arg4 includeQualityParameter:(id)arg5 filterNSFW:(_Bool)arg6 filterMuted:(_Bool)arg7 context:(id)arg8 responseModelBuilder:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;

@end
