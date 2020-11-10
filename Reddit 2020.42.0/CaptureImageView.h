//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "CaptureCellContentViewProtocol-Protocol.h"

@class BaseImageView, CaptureContentImage, CaptureScreen, NSString;

@interface CaptureImageView : BaseView <CaptureCellContentViewProtocol>
{
    CaptureScreen *_screen;
    CaptureContentImage *_content;
    BaseImageView *_imageView;
}

+ (struct CGSize)calculatedSizeWithData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BaseImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) CaptureContentImage *content; // @synthesize content=_content;
@property(nonatomic) __weak CaptureScreen *screen; // @synthesize screen=_screen;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithContent:(id)arg1 screen:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

