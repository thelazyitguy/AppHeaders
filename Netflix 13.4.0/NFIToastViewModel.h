//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFIImageModel, NSDictionary, NSString;

@interface NFIToastViewModel : NSObject
{
    _Bool _scalingEnabled;
    NSString *_ID;
    NSString *_styleId;
    long long _type;
    NFIImageModel *_iconImage;
    NFIImageModel *_backgroundImage;
    NSDictionary *_data;
    NSDictionary *_layoutAssetManifest;
    struct CGSize _size;
    struct CGVector _screenPosition;
    CDStruct_84bf8c3a _label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *layoutAssetManifest; // @synthesize layoutAssetManifest=_layoutAssetManifest;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, nonatomic) NFIImageModel *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(readonly, nonatomic) NFIImageModel *iconImage; // @synthesize iconImage=_iconImage;
@property(readonly, nonatomic) struct CGVector screenPosition; // @synthesize screenPosition=_screenPosition;
@property(readonly, nonatomic) CDStruct_84bf8c3a label; // @synthesize label=_label;
@property(readonly, nonatomic) _Bool scalingEnabled; // @synthesize scalingEnabled=_scalingEnabled;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *styleId; // @synthesize styleId=_styleId;
@property(readonly, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (id)initWithDictionary:(id)arg1 assetManifest:(id)arg2 styles:(id)arg3;

@end
