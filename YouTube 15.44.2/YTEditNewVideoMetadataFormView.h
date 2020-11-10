//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <Module_Framework/YTResponder-Protocol.h>

@class NSString, UIView, YTEditBannerView, YTEditMetadataAccountButton, YTVideoThumbnailView;
@protocol YTResponder;

@interface YTEditNewVideoMetadataFormView : UIScrollView <YTResponder>
{
    id <YTResponder> _parentResponder;
    YTEditBannerView *_complianceBanner;
    YTEditBannerView *_musicDisclaimerBanner;
    YTEditBannerView *_uploadBanner;
    YTVideoThumbnailView *_videoThumbnailView;
    YTEditMetadataAccountButton *_accountButton;
    UIView *_editorView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *editorView; // @synthesize editorView=_editorView;
@property(readonly, nonatomic) YTEditMetadataAccountButton *accountButton; // @synthesize accountButton=_accountButton;
@property(readonly, nonatomic) YTVideoThumbnailView *videoThumbnailView; // @synthesize videoThumbnailView=_videoThumbnailView;
@property(readonly, nonatomic) YTEditBannerView *uploadBanner; // @synthesize uploadBanner=_uploadBanner;
@property(readonly, nonatomic) YTEditBannerView *musicDisclaimerBanner; // @synthesize musicDisclaimerBanner=_musicDisclaimerBanner;
@property(readonly, nonatomic) YTEditBannerView *complianceBanner; // @synthesize complianceBanner=_complianceBanner;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)layoutSubviews;
- (id)initWithEditorView:(id)arg1 showComplianceBanner:(_Bool)arg2 showMusicDisclaimerBanner:(_Bool)arg3 uploadBannerRenderer:(id)arg4 parentResponder:(id)arg5 frame:(struct CGRect)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
