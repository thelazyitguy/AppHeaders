//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UIImagePickerControllerDelegate-Protocol.h"

@interface _TtC6Reddit28MediaSelectionViewController : BaseViewController <UIImagePickerControllerDelegate>
{
    // Error parsing type: , name: analyticsDelegate
    // Error parsing type: , name: delegate
    // Error parsing type: , name: accountContext
    // Error parsing type: , name: assetManager
    // Error parsing type: , name: configuration
    // Error parsing type: , name: assetCollection
    // Error parsing type: , name: assets
    // Error parsing type: , name: collectionViewImageContentMode
    // Error parsing type: , name: collectionViewImageManager
    // Error parsing type: , name: collectionViewImageRequestOptions
    // Error parsing type: , name: selectedAssetIdentifiers
    // Error parsing type: , name: selectionImageContentMode
    // Error parsing type: , name: selectionImageManager
    // Error parsing type: , name: selectionImageRequestOptions
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: cancelBarButtonItem
    // Error parsing type: , name: nextBarButtonItem
    // Error parsing type: , name: spinnerView
    // Error parsing type: , name: titleButton
}

- (void).cxx_destruct;
- (id)init;
- (void)didTapTitle;
- (void)didTapNext;
- (void)didTapClose;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
