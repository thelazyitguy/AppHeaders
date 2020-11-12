//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAMraidDataProviding-Protocol.h>

@class NSArray, NSString, SMAObservable;

@interface SMAMraidDataProvider : NSObject <SMAMraidDataProviding>
{
    SMAObservable *_audioVolume;
    NSString *_html;
    unsigned long long _placementType;
    SMAObservable *_screenSize;
    SMAObservable *_maxSize;
    SMAObservable *_currentAppOrientation;
    SMAObservable *_deviceLocation;
    SMAObservable *_exposureProperties;
    SMAObservable *_expandFullScreenProperties;
    SMAObservable *_defaultPosition;
    SMAObservable *_currentPosition;
}

@property(retain, nonatomic) SMAObservable *currentPosition; // @synthesize currentPosition=_currentPosition;
@property(retain, nonatomic) SMAObservable *defaultPosition; // @synthesize defaultPosition=_defaultPosition;
@property(retain, nonatomic) SMAObservable *expandFullScreenProperties; // @synthesize expandFullScreenProperties=_expandFullScreenProperties;
@property(retain, nonatomic) SMAObservable *exposureProperties; // @synthesize exposureProperties=_exposureProperties;
@property(retain, nonatomic) SMAObservable *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property(retain, nonatomic) SMAObservable *currentAppOrientation; // @synthesize currentAppOrientation=_currentAppOrientation;
@property(retain, nonatomic) SMAObservable *maxSize; // @synthesize maxSize=_maxSize;
@property(retain, nonatomic) SMAObservable *screenSize; // @synthesize screenSize=_screenSize;
@property(nonatomic) unsigned long long placementType; // @synthesize placementType=_placementType;
@property(copy, nonatomic) NSString *html; // @synthesize html=_html;
@property(retain, nonatomic) SMAObservable *audioVolume; // @synthesize audioVolume=_audioVolume;
- (void).cxx_destruct;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) NSArray *supportedMraidEvents;
@property(readonly, nonatomic) NSArray *supportedFeatures;
@property(readonly, nonatomic) NSString *mraidVersion;
- (void)setupLocation;
- (void)setupMaxSize;
- (void)setupScreenProperties;
- (void)setupAppOrientation;
- (void)setupAudioVolume;
- (void)dealloc;
- (id)initWithPlacementType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
