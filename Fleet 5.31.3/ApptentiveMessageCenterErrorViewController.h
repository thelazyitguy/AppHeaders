//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class ApptentiveInteraction, UIImageView, UILabel;

@interface ApptentiveMessageCenterErrorViewController : UIViewController
{
    UIImageView *_imageView;
    UILabel *_textLabel;
    ApptentiveInteraction *_interaction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ApptentiveInteraction *interaction; // @synthesize interaction=_interaction;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)dismissNotification:(id)arg1;
- (void)dismiss:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

@end
