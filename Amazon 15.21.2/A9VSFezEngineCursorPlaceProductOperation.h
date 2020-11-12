//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "A9VSFezEngineCursorPlaceProductOperation-Protocol.h"
#import "A9VSFezEngineRenderPipelineOperation-Protocol.h"

@class A9VSFezProduct, NSString;

@interface A9VSFezEngineCursorPlaceProductOperation : NSObject <A9VSFezEngineRenderPipelineOperation, A9VSFezEngineCursorPlaceProductOperation>
{
    _Bool _didDropOffProduct;
    A9VSFezProduct *_product;
}

@property(nonatomic) _Bool didDropOffProduct; // @synthesize didDropOffProduct=_didDropOffProduct;
@property(nonatomic) __weak A9VSFezProduct *product; // @synthesize product=_product;
- (void).cxx_destruct;
- (void)engineWillRender:(id)arg1;
- (id)placementProduct;
- (_Bool)markProductForDropOff;
- (id)initWithProduct:(id)arg1;
- (_Bool)shouldDiscard;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
