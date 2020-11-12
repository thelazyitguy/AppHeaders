//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DYNAvatarView, DYNLabel, GSCImageUrlOptions, UIImageView;
@protocol DYNUser;

@interface DYNSearchFilterCell : UICollectionViewCell
{
    unsigned int _type;
    id <DYNUser> _user;
    unsigned int _contentType;
    GSCImageUrlOptions *_imageURLOptions;
    _Bool _showCheckmark;
    DYNAvatarView *_avatar;
    DYNLabel *_nameLabel;
    UIImageView *_checkImageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showCheckmark; // @synthesize showCheckmark=_showCheckmark;
- (void)setUpConstraints;
- (void)setUpSubviews;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (_Bool)accessibilityActivate;
- (void)setContentType:(unsigned int)arg1;
- (void)setUser:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
