//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UITextField, UIView;

@interface _TtC8WishList39WMRegistryRegistrantNamesViewController : UIViewController
{
    // Error parsing type: , name: addCoRegistrantHeightConstraint
    // Error parsing type: , name: removeCoRegistrantHeightConstraint
    // Error parsing type: , name: removeCoRegistrantContainerView
    // Error parsing type: , name: separatorViewWidthConstraint
    // Error parsing type: , name: addCoRegistrantContainerView
    // Error parsing type: , name: registrantFirstNameTextField
    // Error parsing type: , name: registrantLastNameTextField
    // Error parsing type: , name: coRegistrantFirstNameTextField
    // Error parsing type: , name: coRegistrantLastNameTextField
    // Error parsing type: , name: addingCoRegistrant
    // Error parsing type: , name: addCoRegistrantHeight
    // Error parsing type: , name: removeCoRegistrantHeight
    // Error parsing type: , name: coRegistrantFieldsActive
    // Error parsing type: , name: delegate
    // Error parsing type: , name: registrantFirstName
    // Error parsing type: , name: registrantLastName
    // Error parsing type: , name: coRegistrantFirstName
    // Error parsing type: , name: coRegistrantLastName
    // Error parsing type: , name: listType
    // Error parsing type: , name: listID
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)removeCoRegistrantAction:(id)arg1;
- (void)addCoRegistrantAction:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UITextField *coRegistrantLastNameTextField; // @synthesize coRegistrantLastNameTextField;
@property(nonatomic) __weak UITextField *coRegistrantFirstNameTextField; // @synthesize coRegistrantFirstNameTextField;
@property(nonatomic) __weak UITextField *registrantLastNameTextField; // @synthesize registrantLastNameTextField;
@property(nonatomic) __weak UITextField *registrantFirstNameTextField; // @synthesize registrantFirstNameTextField;
@property(nonatomic) __weak UIView *addCoRegistrantContainerView; // @synthesize addCoRegistrantContainerView;
@property(nonatomic) __weak NSLayoutConstraint *separatorViewWidthConstraint; // @synthesize separatorViewWidthConstraint;
@property(nonatomic) __weak UIView *removeCoRegistrantContainerView; // @synthesize removeCoRegistrantContainerView;
@property(nonatomic) __weak NSLayoutConstraint *removeCoRegistrantHeightConstraint; // @synthesize removeCoRegistrantHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *addCoRegistrantHeightConstraint; // @synthesize addCoRegistrantHeightConstraint;

@end
