//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "A9VSFezMessageView.h"

@class NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel, UIView;

@interface A9VSFezGeneralMessageView : A9VSFezMessageView
{
    UIView *_messageContainerView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_accessoryImageView;
    UIImage *_image;
    NSString *_title;
    NSString *_subtitle;
    UIImage *_accessoryImage;
    NSLayoutConstraint *_messageContainerViewBottomAnchor;
    NSLayoutConstraint *_messageContainerViewLessThanOrEqualToWidthAnchor;
    unsigned long long _televisionMessageType;
    unsigned long long _horizontalMessageType;
}

@property(nonatomic) unsigned long long horizontalMessageType; // @synthesize horizontalMessageType=_horizontalMessageType;
@property(nonatomic) unsigned long long televisionMessageType; // @synthesize televisionMessageType=_televisionMessageType;
@property(retain, nonatomic) NSLayoutConstraint *messageContainerViewLessThanOrEqualToWidthAnchor; // @synthesize messageContainerViewLessThanOrEqualToWidthAnchor=_messageContainerViewLessThanOrEqualToWidthAnchor;
@property(retain, nonatomic) NSLayoutConstraint *messageContainerViewBottomAnchor; // @synthesize messageContainerViewBottomAnchor=_messageContainerViewBottomAnchor;
@property(retain, nonatomic) UIImage *accessoryImage; // @synthesize accessoryImage=_accessoryImage;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *messageContainerView; // @synthesize messageContainerView=_messageContainerView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setUpAnimators;
- (void)setUpConstraints;
- (void)setUpSubviews;
- (id)initWithHorizontalMessageType:(unsigned long long)arg1 subtitle:(id)arg2;
- (id)initWithHorizontalMessageType:(unsigned long long)arg1;
- (id)initWithTelevisionMessageType:(unsigned long long)arg1 subtitle:(id)arg2;
- (id)initWithTelevisionMessageType:(unsigned long long)arg1;

@end
