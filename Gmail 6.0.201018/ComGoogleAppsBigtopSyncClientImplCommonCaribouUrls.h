//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataMultiloginMultiLoginUrlRewriter;
@protocol ComGoogleAppsBigtopDataDelegationDelegationUrlRewriter, JBTSettingsClient;

@interface ComGoogleAppsBigtopSyncClientImplCommonCaribouUrls : NSObject
{
    id <JBTSettingsClient> settingsClient_;
    ComGoogleAppsBigtopDataMultiloginMultiLoginUrlRewriter *multiLoginUrlRewriter_;
    id <ComGoogleAppsBigtopDataDelegationDelegationUrlRewriter> delegationUrlRewriter_;
}

- (void)dealloc;
- (id)getPrintDraftUrlWithNSString:(id)arg1;
- (id)getPrintMessageUrlWithNSString:(id)arg1;
- (id)getSpamInfoUrlWithNSString:(id)arg1;
- (id)getDownloadMessageUrlWithNSString:(id)arg1;
- (id)getOriginalMessageUrlWithNSString:(id)arg1;
- (id)getPrintConversationUrlWithNSString:(id)arg1;

@end
