//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UICollectionViewCell, UITextView;

@protocol GTEEditingTextViewCellDelegate <NSObject>
- (void)didSaveChangesAndTextViewDidEndEditing:(UITextView *)arg1;
- (void)willSaveChangesAndTextViewDidEndEditing:(UITextView *)arg1;
- (void)textViewWillBeginEditing:(UITextView *)arg1 inCell:(UICollectionViewCell *)arg2;
@end
