//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath;

@interface NFUIDisplayPageSelectionManager : NSObject
{
    _Bool _firstSelection;
    NSIndexPath *_selectedItem;
    NSIndexPath *_deselectedItem;
    CDUnknownBlockType _selectionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType selectionBlock; // @synthesize selectionBlock=_selectionBlock;
@property(nonatomic) _Bool firstSelection; // @synthesize firstSelection=_firstSelection;
@property(copy, nonatomic) NSIndexPath *deselectedItem; // @synthesize deselectedItem=_deselectedItem;
@property(copy, nonatomic) NSIndexPath *selectedItem; // @synthesize selectedItem=_selectedItem;
- (void)deselectItem:(id)arg1;
- (void)selectItem:(id)arg1;
- (id)initWithSelectionBlock:(CDUnknownBlockType)arg1;

@end

