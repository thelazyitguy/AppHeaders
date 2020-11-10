//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTCanvasFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _canvasNoCacheEnabled;
    _Bool _canvasPlaylistEnabled;
    _Bool _canvasPreviewEnabled;
    _Bool _canvasAbSettingsEnabled;
    _Bool _canvasAbTapEnabled;
    _Bool _canvasEnabled;
    unsigned long long _canvasAbToggle;
    NSString *_canvasAbToggleString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *canvasAbToggleString; // @synthesize canvasAbToggleString=_canvasAbToggleString;
@property(readonly, nonatomic) unsigned long long canvasAbToggle; // @synthesize canvasAbToggle=_canvasAbToggle;
@property(readonly, nonatomic) _Bool canvasEnabled; // @synthesize canvasEnabled=_canvasEnabled;
@property(readonly, nonatomic) _Bool canvasAbTapEnabled; // @synthesize canvasAbTapEnabled=_canvasAbTapEnabled;
@property(readonly, nonatomic) _Bool canvasAbSettingsEnabled; // @synthesize canvasAbSettingsEnabled=_canvasAbSettingsEnabled;
@property(readonly, nonatomic) _Bool canvasPreviewEnabled; // @synthesize canvasPreviewEnabled=_canvasPreviewEnabled;
@property(readonly, nonatomic) _Bool canvasPlaylistEnabled; // @synthesize canvasPlaylistEnabled=_canvasPlaylistEnabled;
@property(readonly, nonatomic) _Bool canvasNoCacheEnabled; // @synthesize canvasNoCacheEnabled=_canvasNoCacheEnabled;
- (unsigned long long)mapCanvasAbToggleToEnumValue:(id)arg1;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

