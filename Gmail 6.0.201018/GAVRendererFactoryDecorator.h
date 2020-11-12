//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVRendererFactory-Protocol.h"

@class GAVFileTypes;
@protocol GAVRendererFactory;

@interface GAVRendererFactoryDecorator : NSObject <GAVRendererFactory>
{
    id <GAVRendererFactory> _decoratedRendererFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GAVRendererFactory> decoratedRendererFactory; // @synthesize decoratedRendererFactory=_decoratedRendererFactory;
- (id)viewControllerForFile:(id)arg1 error:(id)arg2;
- (id)viewControllerForFile:(id)arg1;
@property(retain, nonatomic) GAVFileTypes *fileTypes;
- (id)initWithRendererFactory:(id)arg1;

@end
