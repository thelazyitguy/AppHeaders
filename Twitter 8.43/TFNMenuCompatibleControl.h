//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <TFNUI/TFNMenuDisplayEvents-Protocol.h>

@class NSString, UIMenu;

@interface TFNMenuCompatibleControl : UIControl <TFNMenuDisplayEvents>
{
    CDUnknownBlockType _willDisplayMenuBlock;
    CDUnknownBlockType _willDismissMenuBlock;
    UIMenu *_menu;
    struct CGPoint _menuAttachmentPoint;
}

+ (id)menuCompatibleControlWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGPoint menuAttachmentPoint; // @synthesize menuAttachmentPoint=_menuAttachmentPoint;
@property(retain, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
@property(copy, nonatomic) CDUnknownBlockType willDismissMenuBlock; // @synthesize willDismissMenuBlock=_willDismissMenuBlock;
@property(copy, nonatomic) CDUnknownBlockType willDisplayMenuBlock; // @synthesize willDisplayMenuBlock=_willDisplayMenuBlock;
- (void)_tfn_menuActionTriggered;
- (struct CGPoint)menuAttachmentPointForConfiguration:(id)arg1;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)initWithFrame:(struct CGRect)arg1 primaryAction:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithFramePrivate:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
