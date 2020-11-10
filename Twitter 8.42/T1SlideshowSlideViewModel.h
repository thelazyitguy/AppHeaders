//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TAVPlayer, TAVPlayerViewConfiguration, TFNDirectMessagePlayable, TFNTwitterMediaAsset, TFNTwitterStatus, TFSTwitterEntityMedia, UIImage;
@protocol TFNTwitterCardDataSourceObject;

@interface T1SlideshowSlideViewModel : NSObject
{
    _Bool _mediaPausedBeforeAppResigned;
    _Bool _hasFinalImage;
    _Bool _showsWatchAgain;
    TFNTwitterStatus *_status;
    id <TFNTwitterCardDataSourceObject> _sourceObject;
    TFSTwitterEntityMedia *_media;
    TFNTwitterMediaAsset *_mediaAsset;
    TFNDirectMessagePlayable *_directMessagePlayable;
    long long _slideType;
    NSString *_requestedImageURL;
    NSString *_imageAccessibilityHint;
    UIImage *_displayImage;
    TAVPlayer *_tavPlayer;
    TAVPlayerViewConfiguration *_tavPlayerViewConfiguration;
    struct CGSize _requestedImageDimensions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TAVPlayerViewConfiguration *tavPlayerViewConfiguration; // @synthesize tavPlayerViewConfiguration=_tavPlayerViewConfiguration;
@property(retain, nonatomic) TAVPlayer *tavPlayer; // @synthesize tavPlayer=_tavPlayer;
@property(retain, nonatomic) UIImage *displayImage; // @synthesize displayImage=_displayImage;
@property(nonatomic) _Bool showsWatchAgain; // @synthesize showsWatchAgain=_showsWatchAgain;
@property(nonatomic) _Bool hasFinalImage; // @synthesize hasFinalImage=_hasFinalImage;
@property(nonatomic) _Bool mediaPausedBeforeAppResigned; // @synthesize mediaPausedBeforeAppResigned=_mediaPausedBeforeAppResigned;
@property(nonatomic) struct CGSize requestedImageDimensions; // @synthesize requestedImageDimensions=_requestedImageDimensions;
@property(retain, nonatomic) NSString *imageAccessibilityHint; // @synthesize imageAccessibilityHint=_imageAccessibilityHint;
@property(retain, nonatomic) NSString *requestedImageURL; // @synthesize requestedImageURL=_requestedImageURL;
@property(nonatomic) long long slideType; // @synthesize slideType=_slideType;
@property(retain, nonatomic) TFNDirectMessagePlayable *directMessagePlayable; // @synthesize directMessagePlayable=_directMessagePlayable;
@property(retain, nonatomic) TFNTwitterMediaAsset *mediaAsset; // @synthesize mediaAsset=_mediaAsset;
@property(retain, nonatomic) TFSTwitterEntityMedia *media; // @synthesize media=_media;
@property(retain, nonatomic) id <TFNTwitterCardDataSourceObject> sourceObject; // @synthesize sourceObject=_sourceObject;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
- (id)viewModelByResettingImage;
- (id)viewModelWithMediaPausedBeforeAppResigned:(_Bool)arg1;
- (id)viewModelWithFinalImage:(id)arg1;
- (id)viewModelWithTAVPlayerViewConfiguration:(id)arg1;
- (id)viewModelWithTAVPlayer:(id)arg1;
- (id)mutableCopy;
- (id)copy;
- (id)initWithStatus:(id)arg1 sourceObject:(id)arg2 media:(id)arg3 mediaAsset:(id)arg4 directMessagePlayable:(id)arg5 slideType:(long long)arg6 requestedImageURL:(id)arg7 imageAccessibilityHint:(id)arg8 requestedImageDimensions:(struct CGSize)arg9 mediaPausedBeforeAppResigned:(_Bool)arg10 hasFinalImage:(_Bool)arg11 showsWatchAgain:(_Bool)arg12 displayImage:(id)arg13 tavPlayer:(id)arg14 tavPlayerViewConfiguration:(id)arg15;

@end

