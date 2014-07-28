//
//  DetailViewController.h
//  Controll
//
//  Created by Adalto William dos Reis on 28/07/14.
//  Copyright (c) 2014 Adalto William dos Reis. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
