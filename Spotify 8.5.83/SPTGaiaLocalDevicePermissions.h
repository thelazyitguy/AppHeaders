//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTProductState;

@interface SPTGaiaLocalDevicePermissions : NSObject
{
    id <SPTProductState> _productState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
- (_Bool)isLocalDeviceShuffleOnly;
- (id)initWithProductState:(id)arg1;

@end
