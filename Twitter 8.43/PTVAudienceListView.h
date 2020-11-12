//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, PTVAudienceListViewComponents, UILabel;

@interface PTVAudienceListView : UIView
{
    _Bool _shouldTruncate;
    PTVAudienceListViewComponents *_components;
    UILabel *_titleLabel;
    UILabel *_suffixLabel;
    NSString *_emptyText;
    NSArray *_listMembers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *listMembers; // @synthesize listMembers=_listMembers;
@property(retain, nonatomic) NSString *emptyText; // @synthesize emptyText=_emptyText;
- (id)calculateComponentsForBounds:(struct CGRect)arg1;
- (id)suffixWithCount:(unsigned long long)arg1;
- (struct CGSize)sizeOfString:(id)arg1 withSize:(struct CGSize)arg2;
- (void)recalculateLabelText;
- (id)textAttributes;
- (void)setListMembers:(id)arg1 shouldTruncate:(_Bool)arg2;
- (void)setupPTVAudienceListView;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
