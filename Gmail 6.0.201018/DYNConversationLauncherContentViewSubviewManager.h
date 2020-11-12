//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNBadgeCountView, NSString, UIColor, UIImageView, UILabel;
@protocol DYNColorSchemeService;

@interface DYNConversationLauncherContentViewSubviewManager : NSObject
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    DYNBadgeCountView *_badgeCountView;
    NSString *_imageName;
    UIColor *_tintColor;
    double _iconCenterOffset;
    double _titleLabelOffset;
    id <DYNColorSchemeService> _colorSchemeService;
}

- (void).cxx_destruct;
- (long long)badgeCountFromObject:(id)arg1;
- (void)constrainSubviewsToParentView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) NSString *accessibilityLabel;
- (void)updateWithObject:(id)arg1;
- (void)prepareForReuse;
- (void)addAndConstrainSubviewsToParentView:(id)arg1;
- (id)init;

@end
