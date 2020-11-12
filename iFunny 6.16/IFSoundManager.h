//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IFVolumeOverlay;

@interface IFSoundManager : NSObject
{
    _Bool _isMute;
    int _deviceSilentMode;
    IFVolumeOverlay *_volumeOverlay;
}

+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) IFVolumeOverlay *volumeOverlay; // @synthesize volumeOverlay=_volumeOverlay;
@property(nonatomic) int deviceSilentMode; // @synthesize deviceSilentMode=_deviceSilentMode;
@property(nonatomic) _Bool isMute; // @synthesize isMute=_isMute;
- (void)dealloc;
- (void)onWillResignActive;
- (void)volumeChanged:(id)arg1;
@property(nonatomic) _Bool volumeIndicatorEnabled;
@property(readonly, nonatomic) double volume;
- (void)notifyMuteChanged:(_Bool)arg1;
- (void)forceSetMute:(_Bool)arg1;
- (void)setupVolumeIndicator;
- (id)init;

@end
