//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class QTMCollectionViewEditingController, QTMCollectionViewStyleController;

@interface QTMCollectionView : UICollectionView
{
    _Bool _editing;
    _Bool _allowsEditing;
    _Bool _allowsReordering;
    _Bool _allowsCellInteractionsWhileEditing;
    _Bool _allowsSwipeToDismissItem;
    _Bool _allowsSwipeToDismissSection;
    QTMCollectionViewEditingController *_editingController;
    QTMCollectionViewStyleController *_styleController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QTMCollectionViewStyleController *styleController; // @synthesize styleController=_styleController;
@property(retain, nonatomic) QTMCollectionViewEditingController *editingController; // @synthesize editingController=_editingController;
@property(nonatomic) _Bool allowsSwipeToDismissSection; // @synthesize allowsSwipeToDismissSection=_allowsSwipeToDismissSection;
@property(nonatomic) _Bool allowsSwipeToDismissItem; // @synthesize allowsSwipeToDismissItem=_allowsSwipeToDismissItem;
@property(nonatomic) _Bool allowsCellInteractionsWhileEditing; // @synthesize allowsCellInteractionsWhileEditing=_allowsCellInteractionsWhileEditing;
@property(nonatomic) _Bool allowsReordering; // @synthesize allowsReordering=_allowsReordering;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isEditing) _Bool editing; // @dynamic editing;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end

