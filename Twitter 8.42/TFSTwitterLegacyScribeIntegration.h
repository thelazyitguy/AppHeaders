//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribe/TFSTwitterLegacyScribeIntegration-Protocol.h>

@class NSString;
@protocol TFSTwitterScribeWriter;

@interface TFSTwitterLegacyScribeIntegration : NSObject <TFSTwitterLegacyScribeIntegration>
{
    id <TFSTwitterScribeWriter> _scribeWriter;
    CDUnknownBlockType _isAppBackgroundedTest;
    CDUnknownBlockType _optionsProvider;
    CDUnknownBlockType _configurationProvider;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType configurationProvider; // @synthesize configurationProvider=_configurationProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType optionsProvider; // @synthesize optionsProvider=_optionsProvider;
@property(readonly, copy, nonatomic) CDUnknownBlockType isAppBackgroundedTest; // @synthesize isAppBackgroundedTest=_isAppBackgroundedTest;
@property(readonly, nonatomic) id <TFSTwitterScribeWriter> scribeWriter; // @synthesize scribeWriter=_scribeWriter;
- (id)initWithScribeWriter:(id)arg1 configurationProvider:(CDUnknownBlockType)arg2 optionsProvider:(CDUnknownBlockType)arg3 isAppBackgroundedTest:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

