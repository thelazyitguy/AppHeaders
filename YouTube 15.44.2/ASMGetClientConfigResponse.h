//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBDuration, GPBInt32Array, NSMutableArray;

@interface ASMGetClientConfigResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool canUsePeopleApiForProfilePictureUploading; // @dynamic canUsePeopleApiForProfilePictureUploading;
@property(nonatomic) _Bool hasCanUsePeopleApiForProfilePictureUploading; // @dynamic hasCanUsePeopleApiForProfilePictureUploading;
@property(nonatomic) _Bool hasPrefetchingEnabled; // @dynamic hasPrefetchingEnabled;
@property(nonatomic) _Bool hasScreenMaxLifetime; // @dynamic hasScreenMaxLifetime;
@property(nonatomic) _Bool hasStableScreenStaleTime; // @dynamic hasStableScreenStaleTime;
@property(nonatomic) _Bool hasUnstableScreenStaleTime; // @dynamic hasUnstableScreenStaleTime;
@property(retain, nonatomic) GPBInt32Array *heartbeatTimesSArray; // @dynamic heartbeatTimesSArray;
@property(readonly, nonatomic) unsigned long long heartbeatTimesSArray_Count; // @dynamic heartbeatTimesSArray_Count;
@property(nonatomic) _Bool prefetchingEnabled; // @dynamic prefetchingEnabled;
@property(retain, nonatomic) GPBDuration *screenMaxLifetime; // @dynamic screenMaxLifetime;
@property(retain, nonatomic) GPBDuration *stableScreenStaleTime; // @dynamic stableScreenStaleTime;
@property(retain, nonatomic) GPBDuration *unstableScreenStaleTime; // @dynamic unstableScreenStaleTime;
@property(retain, nonatomic) NSMutableArray *webviewBlacklistedURLPatternsArray; // @dynamic webviewBlacklistedURLPatternsArray;
@property(readonly, nonatomic) unsigned long long webviewBlacklistedURLPatternsArray_Count; // @dynamic webviewBlacklistedURLPatternsArray_Count;
@property(retain, nonatomic) NSMutableArray *webviewBrowserAuthBlacklistedURLPatternsArray; // @dynamic webviewBrowserAuthBlacklistedURLPatternsArray;
@property(readonly, nonatomic) unsigned long long webviewBrowserAuthBlacklistedURLPatternsArray_Count; // @dynamic webviewBrowserAuthBlacklistedURLPatternsArray_Count;
@property(retain, nonatomic) NSMutableArray *webviewBrowserAuthWhitelistedURLPatternsArray; // @dynamic webviewBrowserAuthWhitelistedURLPatternsArray;
@property(readonly, nonatomic) unsigned long long webviewBrowserAuthWhitelistedURLPatternsArray_Count; // @dynamic webviewBrowserAuthWhitelistedURLPatternsArray_Count;
@property(retain, nonatomic) NSMutableArray *webviewDefaultJsBridgeBlacklistedURLPatternsArray; // @dynamic webviewDefaultJsBridgeBlacklistedURLPatternsArray;
@property(readonly, nonatomic) unsigned long long webviewDefaultJsBridgeBlacklistedURLPatternsArray_Count; // @dynamic webviewDefaultJsBridgeBlacklistedURLPatternsArray_Count;
@property(retain, nonatomic) NSMutableArray *webviewDefaultJsBridgeWhitelistedURLPatternsArray; // @dynamic webviewDefaultJsBridgeWhitelistedURLPatternsArray;
@property(readonly, nonatomic) unsigned long long webviewDefaultJsBridgeWhitelistedURLPatternsArray_Count; // @dynamic webviewDefaultJsBridgeWhitelistedURLPatternsArray_Count;
@property(retain, nonatomic) NSMutableArray *webviewUdcJsBridgeBlacklistedURLPatternsArray; // @dynamic webviewUdcJsBridgeBlacklistedURLPatternsArray;
@property(readonly, nonatomic) unsigned long long webviewUdcJsBridgeBlacklistedURLPatternsArray_Count; // @dynamic webviewUdcJsBridgeBlacklistedURLPatternsArray_Count;
@property(retain, nonatomic) NSMutableArray *webviewUdcJsBridgeWhitelistedURLPatternsArray; // @dynamic webviewUdcJsBridgeWhitelistedURLPatternsArray;
@property(readonly, nonatomic) unsigned long long webviewUdcJsBridgeWhitelistedURLPatternsArray_Count; // @dynamic webviewUdcJsBridgeWhitelistedURLPatternsArray_Count;
@property(retain, nonatomic) NSMutableArray *webviewWhitelistedURLPatternsArray; // @dynamic webviewWhitelistedURLPatternsArray;
@property(readonly, nonatomic) unsigned long long webviewWhitelistedURLPatternsArray_Count; // @dynamic webviewWhitelistedURLPatternsArray_Count;

@end

