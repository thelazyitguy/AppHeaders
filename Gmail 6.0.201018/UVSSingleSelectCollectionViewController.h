//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UVSCollectionViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString;
@protocol UVSSingleSelectCollectionViewControllerDelegate;

@interface UVSSingleSelectCollectionViewController : UVSCollectionViewController <UITextFieldDelegate>
{
    long long _writeInIndex;
    id <UVSSingleSelectCollectionViewControllerDelegate> _delegate;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) __weak id <UVSSingleSelectCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getSmileyImage:(int)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)writeInTextAtIndex:(unsigned long long)arg1;
- (void)viewDidLoad;
- (id)initWithAnswerChoices:(id)arg1 iconType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
