//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSSecureCoding-Protocol.h>

@class NSString;

@interface YTEditStickerUPLModel : NSObject <NSSecureCoding>
{
    NSString *_assetID;
    struct CGSize _assetSize;
    struct CGAffineTransform _transform;
}

+ (_Bool)supportsSecureCoding;
+ (id)modelWithAssetID:(id)arg1 assetSize:(struct CGSize)arg2 transform:(struct CGAffineTransform)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) struct CGSize assetSize; // @synthesize assetSize=_assetSize;
@property(readonly, copy, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

