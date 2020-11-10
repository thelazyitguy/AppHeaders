//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/NSCopying-Protocol.h>

@class NSArray, NSItemProvider, TFNTwitterAccount;

@interface TFNTwitterMediaAssetItemProviderOptions : NSObject <NSCopying>
{
    _Bool _memojiCanvasEnabled;
    NSItemProvider *_itemProvider;
    TFNTwitterAccount *_account;
    NSArray *_acceptableTypeIdentifiers;
    unsigned long long _types;
}

+ (id)acceptableTypeIdentifiersForTypes:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic, getter=isMemojiCanvasEnabled) _Bool memojiCanvasEnabled; // @synthesize memojiCanvasEnabled=_memojiCanvasEnabled;
@property(nonatomic) unsigned long long types; // @synthesize types=_types;
@property(copy, nonatomic) NSArray *acceptableTypeIdentifiers; // @synthesize acceptableTypeIdentifiers=_acceptableTypeIdentifiers;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItemProvider:(id)arg1 account:(id)arg2;
- (id)init;

@end
