//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStackView.h>

#import "DYNContentView-Protocol.h"
#import "GSCImageViewDelegate-Protocol.h"

@class DYNFileContentViewObject, DYNLabel, GSCImageView, NSString, UIButton, UIImage;
@protocol DYNColorSchemeService, DYNFileContentViewDelegate;

@interface DYNFileContentView : UIStackView <GSCImageViewDelegate, DYNContentView>
{
    GSCImageView *_fileTypeIconView;
    DYNFileContentViewObject *_contentViewObject;
    UIStackView *_fileStackView;
    DYNLabel *_fileNameLabel;
    UIStackView *_fileDetailStackView;
    DYNLabel *_fileSenderLabel;
    DYNLabel *_interpunctLabel;
    DYNLabel *_fileDateLabel;
    UIButton *_moreOptionsMenuButton;
    NSString *_mimeType;
    UIImage *_defaultFileIcon;
    id <DYNColorSchemeService> _colorSchemeService;
    id <DYNFileContentViewDelegate> _fileContentViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DYNFileContentViewDelegate> fileContentViewDelegate; // @synthesize fileContentViewDelegate=_fileContentViewDelegate;
- (void)loadingStateChanged:(id)arg1;
- (void)updateViewWithObject:(id)arg1;
- (void)showMoreOptions;
- (void)traitCollectionDidChange:(id)arg1;
- (id)moreOptionsMenuButtonImage;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

