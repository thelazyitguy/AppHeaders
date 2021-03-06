//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsTableRowAdapter.h>

@class TFNTwitterAccount, TFSTwitterScribeContext, TIPImagePipeline;
@protocol T1UnifiedCardComponentViewRegistry;

@interface T1UnifiedCardItemTableRowAdapter : TFNItemsTableRowAdapter
{
    TFSTwitterScribeContext *_scribeContext;
    TFNTwitterAccount *_account;
    id <T1UnifiedCardComponentViewRegistry> _componentRegistry;
    TIPImagePipeline *_imagePipeline;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TIPImagePipeline *imagePipeline; // @synthesize imagePipeline=_imagePipeline;
@property(readonly, nonatomic) id <T1UnifiedCardComponentViewRegistry> componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 cellLayoutObjectIdentifierForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)dataViewController:(id)arg1 cellLayoutForItem:(id)arg2 withObjectIdentifier:(id)arg3 options:(id)arg4 previousLayout:(id)arg5 atIndexPath:(id)arg6;
- (id)initWithAccount:(id)arg1 componentRegistry:(id)arg2 imagePipeline:(id)arg3 scribeContext:(id)arg4;
- (id)init;

@end

