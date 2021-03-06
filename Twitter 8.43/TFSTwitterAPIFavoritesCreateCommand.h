//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterAPICommandWithExternalResponseProcessor.h>

@class NSString, TNUServiceHTTPConfiguration;

@interface TFSTwitterAPIFavoritesCreateCommand : TFSTwitterAPICommandWithExternalResponseProcessor
{
    _Bool _earned;
    TNUServiceHTTPConfiguration *_HTTPRequestConfiguration;
    long long _statusID;
    NSString *_promotedContentImpressionID;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isEarned) _Bool earned; // @synthesize earned=_earned;
@property(copy, nonatomic) NSString *promotedContentImpressionID; // @synthesize promotedContentImpressionID=_promotedContentImpressionID;
@property(nonatomic) long long statusID; // @synthesize statusID=_statusID;
@property(retain, nonatomic) TNUServiceHTTPConfiguration *HTTPRequestConfiguration; // @synthesize HTTPRequestConfiguration=_HTTPRequestConfiguration;
- (id)requestConfigurationForAPIRequest:(id)arg1 requestConfiguration:(id)arg2;
- (void)scribeCommandAttemptResponse:(id)arg1 willRetry:(_Bool)arg2 to:(id)arg3;
- (long long)networkTransactionMetricsStatusForResponse:(id)arg1;
- (id)request;
- (id)initWithAccountID:(id)arg1 statusID:(long long)arg2 context:(id)arg3 source:(unsigned long long)arg4 responseModelBuilder:(id)arg5 responseProcessorBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)initWithAccountID:(id)arg1 statusID:(long long)arg2 promotedContentImpressionID:(id)arg3 earned:(_Bool)arg4 context:(id)arg5 source:(unsigned long long)arg6 responseModelBuilder:(id)arg7 responseProcessorBlock:(CDUnknownBlockType)arg8 completionBlock:(CDUnknownBlockType)arg9;

@end

