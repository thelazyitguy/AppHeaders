//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GIMKey;
@protocol GIMBindingCollectionKeyBuilder, GIMBindingLabelBuilder, GIMModule;

@protocol GIMBinder
- (id <GIMBindingCollectionKeyBuilder>)bindKey:(GIMKey *)arg1;
- (id <GIMBindingLabelBuilder>)bindDictionaryFromType:(id)arg1 toType:(id)arg2;
- (id <GIMBindingLabelBuilder>)bindArrayOfType:(id)arg1;
- (id <GIMBindingLabelBuilder>)bindType:(id)arg1;

@optional
- (void)installModule:(id <GIMModule>)arg1;
@end
