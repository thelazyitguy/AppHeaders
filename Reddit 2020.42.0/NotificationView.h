//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "ObjectObserverProtocol-Protocol.h"

@class BaseButton, BaseImageView, BaseLabel, InboxNotification, NSString;

@interface NotificationView : BaseView <ObjectObserverProtocol>
{
    BaseButton *_overflowButton;
    InboxNotification *_data;
    BaseImageView *_typeIcon;
    BaseLabel *_mainLabel;
    BaseLabel *_detailLabel;
    BaseLabel *_metadataLabel;
}

+ (struct CGSize)calculatedSizeForData:(id)arg1 collectionViewWidth:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) BaseLabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) BaseLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) BaseLabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) BaseImageView *typeIcon; // @synthesize typeIcon=_typeIcon;
@property(retain, nonatomic) InboxNotification *data; // @synthesize data=_data;
@property(retain, nonatomic) BaseButton *overflowButton; // @synthesize overflowButton=_overflowButton;
- (void)updateContentViewsForData:(id)arg1 changeKeyPath:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)styleLabelsWithData:(id)arg1;
- (void)configureWithData:(id)arg1;
- (void)layoutSubviews;
- (void)didEndDisplayingCell;
- (void)prepareForReuse;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

