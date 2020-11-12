//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ASMConfigFlags : NSObject
{
    _Bool _prefetchingEnabled;
    NSArray *_heartbeatTimes;
    double _screenMaxLifetime;
    double _stableScreenStaleTime;
    double _unstableScreenStaleTime;
    NSArray *_webviewAllowlistedURLPatterns;
    NSArray *_webviewDenylistedURLPatterns;
    NSArray *_webviewBrowserAuthAllowlistedURLPatterns;
    NSArray *_webviewBrowserAuthDenylistedURLPatterns;
    NSArray *_webviewDefaultJSBridgeAllowlistedURLPatterns;
    NSArray *_webviewDefaultJSBridgeDenylistedURLPatterns;
    NSArray *_webviewUDCJSBridgeAllowlistedURLPatterns;
    NSArray *_webviewUDCJSBridgeDenylistedURLPatterns;
}

+ (id)flagsFromGetClientConfigResponse:(id)arg1;
+ (id)flagsFromDictionary:(id)arg1;
+ (id)defaultFlags;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *webviewUDCJSBridgeDenylistedURLPatterns; // @synthesize webviewUDCJSBridgeDenylistedURLPatterns=_webviewUDCJSBridgeDenylistedURLPatterns;
@property(retain, nonatomic) NSArray *webviewUDCJSBridgeAllowlistedURLPatterns; // @synthesize webviewUDCJSBridgeAllowlistedURLPatterns=_webviewUDCJSBridgeAllowlistedURLPatterns;
@property(retain, nonatomic) NSArray *webviewDefaultJSBridgeDenylistedURLPatterns; // @synthesize webviewDefaultJSBridgeDenylistedURLPatterns=_webviewDefaultJSBridgeDenylistedURLPatterns;
@property(retain, nonatomic) NSArray *webviewDefaultJSBridgeAllowlistedURLPatterns; // @synthesize webviewDefaultJSBridgeAllowlistedURLPatterns=_webviewDefaultJSBridgeAllowlistedURLPatterns;
@property(retain, nonatomic) NSArray *webviewBrowserAuthDenylistedURLPatterns; // @synthesize webviewBrowserAuthDenylistedURLPatterns=_webviewBrowserAuthDenylistedURLPatterns;
@property(retain, nonatomic) NSArray *webviewBrowserAuthAllowlistedURLPatterns; // @synthesize webviewBrowserAuthAllowlistedURLPatterns=_webviewBrowserAuthAllowlistedURLPatterns;
@property(retain, nonatomic) NSArray *webviewDenylistedURLPatterns; // @synthesize webviewDenylistedURLPatterns=_webviewDenylistedURLPatterns;
@property(retain, nonatomic) NSArray *webviewAllowlistedURLPatterns; // @synthesize webviewAllowlistedURLPatterns=_webviewAllowlistedURLPatterns;
@property(nonatomic) double unstableScreenStaleTime; // @synthesize unstableScreenStaleTime=_unstableScreenStaleTime;
@property(nonatomic) double stableScreenStaleTime; // @synthesize stableScreenStaleTime=_stableScreenStaleTime;
@property(nonatomic) double screenMaxLifetime; // @synthesize screenMaxLifetime=_screenMaxLifetime;
@property(nonatomic) _Bool prefetchingEnabled; // @synthesize prefetchingEnabled=_prefetchingEnabled;
@property(copy, nonatomic) NSArray *heartbeatTimes; // @synthesize heartbeatTimes=_heartbeatTimes;
- (id)toDictionary;
- (id)init;

@end
