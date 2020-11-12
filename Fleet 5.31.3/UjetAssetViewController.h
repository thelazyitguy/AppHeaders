//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVPlayerLayer, AVURLAsset, PHAsset, UIBarButtonItem, UIImageView;

@interface UjetAssetViewController : UIViewController
{
    int _assetRequestID;
    PHAsset *_asset;
    UIImageView *_imageView;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_playButton;
    UIBarButtonItem *_chooseButton;
    UIBarButtonItem *_leftSpace;
    UIBarButtonItem *_rightSpace;
    AVPlayerLayer *_playerLayer;
    AVURLAsset *_urlAsset;
}

@property(nonatomic) int assetRequestID; // @synthesize assetRequestID=_assetRequestID;
@property(retain, nonatomic) AVURLAsset *urlAsset; // @synthesize urlAsset=_urlAsset;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) UIBarButtonItem *rightSpace; // @synthesize rightSpace=_rightSpace;
@property(retain, nonatomic) UIBarButtonItem *leftSpace; // @synthesize leftSpace=_leftSpace;
@property(retain, nonatomic) UIBarButtonItem *chooseButton; // @synthesize chooseButton=_chooseButton;
@property(retain, nonatomic) UIBarButtonItem *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)handleChooseButtonItem:(id)arg1;
- (void)handleCancelButtonItem:(id)arg1;
- (void)handlePlayButtonItem:(id)arg1;
- (id)videoRequestOptions;
- (void)updateImage;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end
