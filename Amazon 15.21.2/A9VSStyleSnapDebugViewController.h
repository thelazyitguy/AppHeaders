//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWTopNavConfig-Protocol.h"

@class A9VSStyleDebugTableViewController, A9VSStyleSnapDebugTextViewController, NSData, NSDictionary, NSString, UIButton, UIImage, UIImageView, UILabel;
@protocol A9VSStyleSnapDebugDelegate;

@interface A9VSStyleSnapDebugViewController : UIViewController <AWTopNavConfig>
{
    UIImage *_displayImage;
    NSString *_searchStatus;
    NSData *_responseData;
    NSDictionary *_dictionary;
    id <A9VSStyleSnapDebugDelegate> _delegate;
    A9VSStyleDebugTableViewController *_controllerVC;
    A9VSStyleSnapDebugTextViewController *_textViewController;
    UIImageView *_imageView;
    UILabel *_aspectRatioLabel;
    UILabel *_searchStatusLabel;
    UIButton *_responseBtn;
    struct CGSize _aspectRatio;
}

@property(nonatomic) __weak UIButton *responseBtn; // @synthesize responseBtn=_responseBtn;
@property(nonatomic) __weak UILabel *searchStatusLabel; // @synthesize searchStatusLabel=_searchStatusLabel;
@property(nonatomic) __weak UILabel *aspectRatioLabel; // @synthesize aspectRatioLabel=_aspectRatioLabel;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) A9VSStyleSnapDebugTextViewController *textViewController; // @synthesize textViewController=_textViewController;
@property(retain, nonatomic) A9VSStyleDebugTableViewController *controllerVC; // @synthesize controllerVC=_controllerVC;
@property(nonatomic) __weak id <A9VSStyleSnapDebugDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(nonatomic) struct CGSize aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(retain, nonatomic) NSString *searchStatus; // @synthesize searchStatus=_searchStatus;
@property(retain, nonatomic) UIImage *displayImage; // @synthesize displayImage=_displayImage;
- (void).cxx_destruct;
- (long long)topNavConfigFlags;
- (void)backBtnTapped:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)preparePropsForDisplay;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

