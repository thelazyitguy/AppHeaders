//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, GLUELabel, NSLayoutConstraint, NSString, UIImageView, UIScrollView;

@interface SPTLoginMagicLinkSentConfirmationView : UIView <GLUEStyleable>
{
    GLUELabel *_titleLabel;
    GLUELabel *_upperTextLabel;
    GLUELabel *_bodyTextLabel;
    UIImageView *_emailImage;
    GLUEButton *_openEmailButton;
    UIScrollView *_scrollView;
    UIView *_contentView;
    NSLayoutConstraint *_titleLabelTopMargin;
    NSLayoutConstraint *_titleLabelEdgeMargin;
    NSLayoutConstraint *_upperTextLabelTopMargin;
    NSLayoutConstraint *_upperTextLabelEdgeMargin;
    NSLayoutConstraint *_bodyTextLabelTopMargin;
    NSLayoutConstraint *_bodyTextLabelEdgeMargin;
    NSLayoutConstraint *_emailImageTopMargin;
    NSLayoutConstraint *_openEmailButtonTopMargin;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *openEmailButtonTopMargin; // @synthesize openEmailButtonTopMargin=_openEmailButtonTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *emailImageTopMargin; // @synthesize emailImageTopMargin=_emailImageTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *bodyTextLabelEdgeMargin; // @synthesize bodyTextLabelEdgeMargin=_bodyTextLabelEdgeMargin;
@property(retain, nonatomic) NSLayoutConstraint *bodyTextLabelTopMargin; // @synthesize bodyTextLabelTopMargin=_bodyTextLabelTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *upperTextLabelEdgeMargin; // @synthesize upperTextLabelEdgeMargin=_upperTextLabelEdgeMargin;
@property(retain, nonatomic) NSLayoutConstraint *upperTextLabelTopMargin; // @synthesize upperTextLabelTopMargin=_upperTextLabelTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelEdgeMargin; // @synthesize titleLabelEdgeMargin=_titleLabelEdgeMargin;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopMargin; // @synthesize titleLabelTopMargin=_titleLabelTopMargin;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) GLUEButton *openEmailButton; // @synthesize openEmailButton=_openEmailButton;
@property(readonly, nonatomic) UIImageView *emailImage; // @synthesize emailImage=_emailImage;
@property(readonly, nonatomic) GLUELabel *bodyTextLabel; // @synthesize bodyTextLabel=_bodyTextLabel;
@property(readonly, nonatomic) GLUELabel *upperTextLabel; // @synthesize upperTextLabel=_upperTextLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

