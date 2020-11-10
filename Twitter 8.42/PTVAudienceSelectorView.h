//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class PTVAudienceListView, PTVAudienceProfileView, PTVAudienceReference, UIImageView, UILabel;

@interface PTVAudienceSelectorView : UIControl
{
    PTVAudienceProfileView *_audienceProfileView;
    PTVAudienceListView *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_caretView;
    _Bool _privateBroadcastsAllowed;
    PTVAudienceReference *_audienceReference;
    long long _style;
    long long _publicAudienceType;
}

- (void).cxx_destruct;
@property(nonatomic) long long publicAudienceType; // @synthesize publicAudienceType=_publicAudienceType;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)setAudienceReference:(id)arg1;
- (void)setPrivateBroadcastsAllowed:(_Bool)arg1;
- (void)updateCaretView;
- (id)caretView;
- (void)updateLabelText;
- (void)updateSubtitleLabelText;
- (void)updateTitleLabelText;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)audienceProfileView;
- (void)styleDidChange;
- (CDStruct_cafad96f)calculateLayoutInRect:(struct CGRect)arg1;
- (void)setupPTVAudienceSelectorView;
- (void)setSelected:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

