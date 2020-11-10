//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GLUEImageView, NSURL, SPTCanvasActivityIndicatorView, SPTCanvasColorExtractor;

@interface SPTCanvasAlbumCoverViewController : UIViewController
{
    GLUEImageView *_albumCoverView;
    NSURL *_albumCoverURL;
    SPTCanvasActivityIndicatorView *_activityIndicatorView;
    SPTCanvasColorExtractor *_colorExtractor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTCanvasColorExtractor *colorExtractor; // @synthesize colorExtractor=_colorExtractor;
@property(readonly, copy, nonatomic) SPTCanvasActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(readonly, copy, nonatomic) NSURL *albumCoverURL; // @synthesize albumCoverURL=_albumCoverURL;
@property(retain, nonatomic) GLUEImageView *albumCoverView; // @synthesize albumCoverView=_albumCoverView;
- (void)dealloc;
- (void)contentDidLoadWithImage:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAlbumCoverURL:(id)arg1;

@end
