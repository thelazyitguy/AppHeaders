//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC4Argo32PrequerySearchCollectionViewCell.h"

#import "NFUICellFactoryItemProtocol-Protocol.h"
#import "NFUICellSelectionProtocol-Protocol.h"

@interface _TtC4Argo32PrequerySearchCollectionViewCell (Argo) <NFUICellFactoryItemProtocol, NFUICellSelectionProtocol>
+ (_Bool)shouldReturnClassForType:(id)arg1 withModel:(id)arg2;
+ (id)reuseIdentifier;
+ (void)registerSelf;
- (struct CGSize)calculatedSize:(struct CGSize)arg1 withModel:(id)arg2 withCollectionView:(id)arg3;
- (void)configureWithViewModel:(id)arg1;
- (void)didSelectItemAtIndexPath:(id)arg1;
@end
