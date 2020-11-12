//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "A9VSFezDeleteProductViewDelegate-Protocol.h"

@class A9VSFezDeleteProductView, A9VSFezRoomCellItem, NSString, UIImageView, UILabel, UIView;
@protocol A9VSFezRoomCellDelegate;

@interface A9VSFezRoomCell : UICollectionViewCell <A9VSFezDeleteProductViewDelegate>
{
    id <A9VSFezRoomCellDelegate> _delegate;
    UIImageView *_roomImageView;
    UILabel *_dateLabel;
    UIView *_overlayView;
    UIView *_containerView;
    UIView *_textContainerView;
    UILabel *_lastSavedLabel;
    A9VSFezDeleteProductView *_deleteRoomView;
    A9VSFezRoomCellItem *_cellItem;
    struct CGSize _maxThumbnailSize;
}

+ (id)cellIdentifier;
@property(nonatomic) __weak A9VSFezRoomCellItem *cellItem; // @synthesize cellItem=_cellItem;
@property(retain, nonatomic) A9VSFezDeleteProductView *deleteRoomView; // @synthesize deleteRoomView=_deleteRoomView;
@property(retain, nonatomic) UILabel *lastSavedLabel; // @synthesize lastSavedLabel=_lastSavedLabel;
@property(nonatomic) struct CGSize maxThumbnailSize; // @synthesize maxThumbnailSize=_maxThumbnailSize;
@property(retain, nonatomic) UIView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UIImageView *roomImageView; // @synthesize roomImageView=_roomImageView;
@property(nonatomic) __weak id <A9VSFezRoomCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didPerformFirstTapOnDeleteView;
- (void)didTapOnDeleteProductView;
- (void)reloadThumbnail;
- (void)configureWithItem:(id)arg1 maxThumbnailSize:(struct CGSize)arg2 allowsRoomDeletion:(_Bool)arg3;
- (void)prepareForReuse;
- (void)setUpInterface;
- (void)setUpLayout;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
