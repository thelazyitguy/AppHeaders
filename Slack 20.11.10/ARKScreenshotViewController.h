//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDate, UIActivityViewController, UIImageView, UITapGestureRecognizer;

@interface ARKScreenshotViewController : UIViewController
{
    UIImageView *_imageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSDate *_date;
    UIActivityViewController *_activityViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)_openActivitySheet:(id)arg1;
- (void)_tapDetected:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithLogMessage:(id)arg1;

@end

