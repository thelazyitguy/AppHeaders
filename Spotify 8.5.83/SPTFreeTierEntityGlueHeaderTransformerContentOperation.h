//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@class NSString;
@protocol HUBContentOperationDelegate;

@interface SPTFreeTierEntityGlueHeaderTransformerContentOperation : NSObject <HUBContentOperation>
{
    id <HUBContentOperationDelegate> delegate;
    NSString *_headerNamespace;
    NSString *_headerName;
    NSString *_headerCategory;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *headerCategory; // @synthesize headerCategory=_headerCategory;
@property(copy, nonatomic) NSString *headerName; // @synthesize headerName=_headerName;
@property(copy, nonatomic) NSString *headerNamespace; // @synthesize headerNamespace=_headerNamespace;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void)copyComponentModelBuilderFrom:(id)arg1 to:(id)arg2;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithHeaderComponentNamespace:(id)arg1 name:(id)arg2 category:(id)arg3;

@end

